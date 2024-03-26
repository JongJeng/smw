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

/*!
 * @file KeyedData1mb.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "KeyedData1mb.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

KeyedData1mb::KeyedData1mb()
{
    // m_key com.eprosima.idl.parser.typecode.PrimitiveTypeCode@29f69090
    m_key = 0;
    // m_data com.eprosima.idl.parser.typecode.SequenceTypeCode@568bf312


}

KeyedData1mb::~KeyedData1mb()
{


}

KeyedData1mb::KeyedData1mb(
        const KeyedData1mb& x)
{
    m_key = x.m_key;
    m_data = x.m_data;
}

KeyedData1mb::KeyedData1mb(
        KeyedData1mb&& x)
{
    m_key = x.m_key;
    m_data = std::move(x.m_data);
}

KeyedData1mb& KeyedData1mb::operator =(
        const KeyedData1mb& x)
{

    m_key = x.m_key;
    m_data = x.m_data;

    return *this;
}

KeyedData1mb& KeyedData1mb::operator =(
        KeyedData1mb&& x)
{

    m_key = x.m_key;
    m_data = std::move(x.m_data);

    return *this;
}

bool KeyedData1mb::operator ==(
        const KeyedData1mb& x) const
{

    return (m_key == x.m_key && m_data == x.m_data);
}

bool KeyedData1mb::operator !=(
        const KeyedData1mb& x)
{
    return !(*this == x);
}

size_t KeyedData1mb::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (1023996 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t KeyedData1mb::getCdrSerializedSize(
        const KeyedData1mb& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void KeyedData1mb::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_key;
    scdr << m_data;

}

void KeyedData1mb::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_key;
    dcdr >> m_data;
}

/*!
 * @brief This function sets a value in member key
 * @param _key New value for member key
 */
void KeyedData1mb::key(
        uint16_t _key)
{
    m_key = _key;
}

/*!
 * @brief This function returns the value of member key
 * @return Value of member key
 */
uint16_t KeyedData1mb::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
uint16_t& KeyedData1mb::key()
{
    return m_key;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void KeyedData1mb::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void KeyedData1mb::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& KeyedData1mb::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& KeyedData1mb::data()
{
    return m_data;
}

size_t KeyedData1mb::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;


     current_align += 2 + eprosima::fastcdr::Cdr::alignment(current_align, 2);

     


    return current_align;
}

bool KeyedData1mb::isKeyDefined()
{
    return true;
}

void KeyedData1mb::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     scdr << m_key;
       
}
