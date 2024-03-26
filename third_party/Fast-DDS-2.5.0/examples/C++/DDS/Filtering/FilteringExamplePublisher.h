// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _FILTERINGEXAMPLE_PUBLISHER_H_
#define _FILTERINGEXAMPLE_PUBLISHER_H_

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/dds/topic/Topic.hpp>

#include "FilteringExamplePubSubTypes.h"

class FilteringExamplePublisher
{
public:

    FilteringExamplePublisher();

    virtual ~FilteringExamplePublisher();

    bool init();

    void run();

private:

    eprosima::fastdds::dds::DomainParticipant* participant_;

    eprosima::fastdds::dds::Publisher* fast_publisher_;

    eprosima::fastdds::dds::Publisher* slow_publisher_;

    eprosima::fastdds::dds::Topic* topic_;

    eprosima::fastdds::dds::DataWriter* fast_writer_;

    eprosima::fastdds::dds::DataWriter* slow_writer_;

    class PubListener : public eprosima::fastdds::dds::DataWriterListener
    {
public:

        PubListener()
            : n_matched(0)
        {
        }

        ~PubListener() override
        {
        }

        void on_publication_matched(
                eprosima::fastdds::dds::DataWriter* writer,
                const eprosima::fastdds::dds::PublicationMatchedStatus& info) override;


        int n_matched;

    } m_listener;

    eprosima::fastdds::dds::TypeSupport myType;
};

#endif // _FILTERINGEXAMPLE_PUBLISHER_H_
