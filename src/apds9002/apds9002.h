/*
 * Author: Zion Orent <zorent@ics.com>
 * Copyright (c) 2015 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <string>
#include <mraa/aio.h>

namespace upm { 
  /**
   * @brief C++ API for the Grove Luminance Sensor
   *
   * This sensor transforms luminous intensity to output analog values.
   * It uses the APDS-9002 ambient light sensor.
   *
   * @defgroup apds9002 libupm-apds9002
   * @ingroup seeed analog light
   */   
   
  /**
   * @sensor APDS-9002
   * @library libupm-apds9002
   * @comname APDS9002
   * @type light ainput
   * @man seeed
   * @con analog
   * 
   * @brief UPM module for the Grove Luminance Sensor
   * 
   * @snippet apds9002.cxx Interesting
   */
   
  class APDS9002 {
  public:
    /**
     * Grove luminance sensor constructor
     *
     * @param pin analog pin to use
     */
    APDS9002(int pin);
    /**
     * APDS9002 Destructor
     */
    ~APDS9002();
    /**
     * Get the luminance value from the sensor
     *
     * @return the luminance reading
     */
    int value();

  private:
    mraa_aio_context m_aio;
  };
}


