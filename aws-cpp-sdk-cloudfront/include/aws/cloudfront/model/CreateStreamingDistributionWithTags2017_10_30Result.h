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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-10-30/CreateStreamingDistributionWithTagsResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateStreamingDistributionWithTags2017_10_30Result
  {
  public:
    CreateStreamingDistributionWithTags2017_10_30Result();
    CreateStreamingDistributionWithTags2017_10_30Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateStreamingDistributionWithTags2017_10_30Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The streaming distribution's information. </p>
     */
    inline const StreamingDistribution& GetStreamingDistribution() const{ return m_streamingDistribution; }

    /**
     * <p>The streaming distribution's information. </p>
     */
    inline void SetStreamingDistribution(const StreamingDistribution& value) { m_streamingDistribution = value; }

    /**
     * <p>The streaming distribution's information. </p>
     */
    inline void SetStreamingDistribution(StreamingDistribution&& value) { m_streamingDistribution = std::move(value); }

    /**
     * <p>The streaming distribution's information. </p>
     */
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithStreamingDistribution(const StreamingDistribution& value) { SetStreamingDistribution(value); return *this;}

    /**
     * <p>The streaming distribution's information. </p>
     */
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithStreamingDistribution(StreamingDistribution&& value) { SetStreamingDistribution(std::move(value)); return *this;}


    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created. For example:<code>
     * https://cloudfront.amazonaws.com/2010-11-01/streaming-distribution/EGTXBD79H29TRA8</code>.</p>
     */
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    
    inline const Aws::String& GetETag() const{ return m_eTag; }

    
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    
    inline CreateStreamingDistributionWithTags2017_10_30Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    StreamingDistribution m_streamingDistribution;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
