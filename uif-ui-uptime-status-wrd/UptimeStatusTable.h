/* mbed
 * Copyright (c) 2006-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __UIF_UI_UPTIME_STATUS_TABLE_H__
#define __UIF_UI_UPTIME_STATUS_TABLE_H__

#include "mbed-drivers/mbed.h"
#include "UIFramework/UIView.h"

class UptimeStatusTable : public UIView::Array
{
public:
    virtual uint32_t getSize(void) const;
    virtual SharedPointer<UIView> viewAtIndex(uint32_t index) const;
    virtual uint32_t heightAtIndex(uint32_t index) const;
    virtual uint32_t widthAtIndex(uint32_t index) const;

    virtual const char* getTitle(void) const;
    virtual uint32_t getFirstIndex(void) const;
    virtual uint32_t getLastIndex(void) const;
    virtual uint32_t getDefaultIndex(void) const;

    virtual SharedPointer<UIView::Action> actionAtIndex(uint32_t index);
};

#endif // __UIF_UI_UPTIME_STATUS_TABLE_H__
