﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/LogicalOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobRunState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a condition under which a trigger fires.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Condition">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API Condition
  {
  public:
    Condition();
    Condition(const Aws::Utils::Json::JsonValue& jsonValue);
    Condition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A logical operator.</p>
     */
    inline const LogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }

    /**
     * <p>A logical operator.</p>
     */
    inline void SetLogicalOperator(const LogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }

    /**
     * <p>A logical operator.</p>
     */
    inline void SetLogicalOperator(LogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }

    /**
     * <p>A logical operator.</p>
     */
    inline Condition& WithLogicalOperator(const LogicalOperator& value) { SetLogicalOperator(value); return *this;}

    /**
     * <p>A logical operator.</p>
     */
    inline Condition& WithLogicalOperator(LogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}


    /**
     * <p>The name of the job in question.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job in question.</p>
     */
    inline Condition& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job in question.</p>
     */
    inline Condition& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job in question.</p>
     */
    inline Condition& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The condition state.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }

    /**
     * <p>The condition state.</p>
     */
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The condition state.</p>
     */
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The condition state.</p>
     */
    inline Condition& WithState(const JobRunState& value) { SetState(value); return *this;}

    /**
     * <p>The condition state.</p>
     */
    inline Condition& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}

  private:

    LogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobRunState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws