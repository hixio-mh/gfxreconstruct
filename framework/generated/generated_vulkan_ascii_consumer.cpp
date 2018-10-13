/*
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "vulkan/vulkan.h"

#include "util/defines.h"
#include "generated/generated_vulkan_ascii_consumer.h"

BRIMSTONE_BEGIN_NAMESPACE(brimstone)
BRIMSTONE_BEGIN_NAMESPACE(format)

void VulkanAsciiConsumer::Process_vkCreateInstance(
    VkResult                                    returnValue,
    const StructPointerDecoder<Decoded_VkInstanceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pInstance)
{
    fprintf(GetFile(), "%s\n", "vkCreateInstance");
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyInstance");
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceCount,
    const PointerDecoder<HandleId>&             pPhysicalDevices)
{
    fprintf(GetFile(), "%s\n", "vkEnumeratePhysicalDevices");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>& pFeatures)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFeatures");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties>& pFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFormatProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    const StructPointerDecoder<Decoded_VkImageFormatProperties>& pImageFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceImageFormatProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties>& pQueueFamilyProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceQueueFamilyProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>& pMemoryProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceMemoryProperties");
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pDevice)
{
    fprintf(GetFile(), "%s\n", "vkCreateDevice");
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDevice");
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    HandleId                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    const PointerDecoder<HandleId>&             pQueue)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceQueue");
}

void VulkanAsciiConsumer::Process_vkQueueSubmit(
    VkResult                                    returnValue,
    HandleId                                    queue,
    uint32_t                                    submitCount,
    const StructPointerDecoder<Decoded_VkSubmitInfo>& pSubmits,
    HandleId                                    fence)
{
    fprintf(GetFile(), "%s\n", "vkQueueSubmit");
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    VkResult                                    returnValue,
    HandleId                                    queue)
{
    fprintf(GetFile(), "%s\n", "vkQueueWaitIdle");
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    VkResult                                    returnValue,
    HandleId                                    device)
{
    fprintf(GetFile(), "%s\n", "vkDeviceWaitIdle");
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkMemoryAllocateInfo>& pAllocateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pMemory)
{
    fprintf(GetFile(), "%s\n", "vkAllocateMemory");
}

void VulkanAsciiConsumer::Process_vkFreeMemory(
    HandleId                                    device,
    HandleId                                    memory,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkFreeMemory");
}

void VulkanAsciiConsumer::Process_vkMapMemory(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    const PointerDecoder<uint64_t>&             ppData)
{
    fprintf(GetFile(), "%s\n", "vkMapMemory");
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    HandleId                                    device,
    HandleId                                    memory)
{
    fprintf(GetFile(), "%s\n", "vkUnmapMemory");
}

void VulkanAsciiConsumer::Process_vkFlushMappedMemoryRanges(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    fprintf(GetFile(), "%s\n", "vkFlushMappedMemoryRanges");
}

void VulkanAsciiConsumer::Process_vkInvalidateMappedMemoryRanges(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    memoryRangeCount,
    const StructPointerDecoder<Decoded_VkMappedMemoryRange>& pMemoryRanges)
{
    fprintf(GetFile(), "%s\n", "vkInvalidateMappedMemoryRanges");
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    HandleId                                    device,
    HandleId                                    memory,
    const PointerDecoder<VkDeviceSize>&         pCommittedMemoryInBytes)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceMemoryCommitment");
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    buffer,
    HandleId                                    memory,
    VkDeviceSize                                memoryOffset)
{
    fprintf(GetFile(), "%s\n", "vkBindBufferMemory");
}

void VulkanAsciiConsumer::Process_vkBindImageMemory(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    image,
    HandleId                                    memory,
    VkDeviceSize                                memoryOffset)
{
    fprintf(GetFile(), "%s\n", "vkBindImageMemory");
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    HandleId                                    device,
    HandleId                                    buffer,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetBufferMemoryRequirements");
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    HandleId                                    device,
    HandleId                                    image,
    const StructPointerDecoder<Decoded_VkMemoryRequirements>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageMemoryRequirements");
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    HandleId                                    device,
    HandleId                                    image,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>& pSparseMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageSparseMemoryRequirements");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSparseImageFormatProperties");
}

void VulkanAsciiConsumer::Process_vkQueueBindSparse(
    VkResult                                    returnValue,
    HandleId                                    queue,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindSparseInfo>& pBindInfo,
    HandleId                                    fence)
{
    fprintf(GetFile(), "%s\n", "vkQueueBindSparse");
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkFenceCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pFence)
{
    fprintf(GetFile(), "%s\n", "vkCreateFence");
}

void VulkanAsciiConsumer::Process_vkDestroyFence(
    HandleId                                    device,
    HandleId                                    fence,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyFence");
}

void VulkanAsciiConsumer::Process_vkResetFences(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    fenceCount,
    const PointerDecoder<HandleId>&             pFences)
{
    fprintf(GetFile(), "%s\n", "vkResetFences");
}

void VulkanAsciiConsumer::Process_vkGetFenceStatus(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    fence)
{
    fprintf(GetFile(), "%s\n", "vkGetFenceStatus");
}

void VulkanAsciiConsumer::Process_vkWaitForFences(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    fenceCount,
    const PointerDecoder<HandleId>&             pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    fprintf(GetFile(), "%s\n", "vkWaitForFences");
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSemaphore)
{
    fprintf(GetFile(), "%s\n", "vkCreateSemaphore");
}

void VulkanAsciiConsumer::Process_vkDestroySemaphore(
    HandleId                                    device,
    HandleId                                    semaphore,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySemaphore");
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkEventCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pEvent)
{
    fprintf(GetFile(), "%s\n", "vkCreateEvent");
}

void VulkanAsciiConsumer::Process_vkDestroyEvent(
    HandleId                                    device,
    HandleId                                    event,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyEvent");
}

void VulkanAsciiConsumer::Process_vkGetEventStatus(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    event)
{
    fprintf(GetFile(), "%s\n", "vkGetEventStatus");
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    event)
{
    fprintf(GetFile(), "%s\n", "vkSetEvent");
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    event)
{
    fprintf(GetFile(), "%s\n", "vkResetEvent");
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pQueryPool)
{
    fprintf(GetFile(), "%s\n", "vkCreateQueryPool");
}

void VulkanAsciiConsumer::Process_vkDestroyQueryPool(
    HandleId                                    device,
    HandleId                                    queryPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyQueryPool");
}

void VulkanAsciiConsumer::Process_vkGetQueryPoolResults(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    const PointerDecoder<uint8_t>&              pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    fprintf(GetFile(), "%s\n", "vkGetQueryPoolResults");
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkBufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pBuffer)
{
    fprintf(GetFile(), "%s\n", "vkCreateBuffer");
}

void VulkanAsciiConsumer::Process_vkDestroyBuffer(
    HandleId                                    device,
    HandleId                                    buffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyBuffer");
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkBufferViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pView)
{
    fprintf(GetFile(), "%s\n", "vkCreateBufferView");
}

void VulkanAsciiConsumer::Process_vkDestroyBufferView(
    HandleId                                    device,
    HandleId                                    bufferView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyBufferView");
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pImage)
{
    fprintf(GetFile(), "%s\n", "vkCreateImage");
}

void VulkanAsciiConsumer::Process_vkDestroyImage(
    HandleId                                    device,
    HandleId                                    image,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyImage");
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    HandleId                                    device,
    HandleId                                    image,
    const StructPointerDecoder<Decoded_VkImageSubresource>& pSubresource,
    const StructPointerDecoder<Decoded_VkSubresourceLayout>& pLayout)
{
    fprintf(GetFile(), "%s\n", "vkGetImageSubresourceLayout");
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageViewCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pView)
{
    fprintf(GetFile(), "%s\n", "vkCreateImageView");
}

void VulkanAsciiConsumer::Process_vkDestroyImageView(
    HandleId                                    device,
    HandleId                                    imageView,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyImageView");
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pShaderModule)
{
    fprintf(GetFile(), "%s\n", "vkCreateShaderModule");
}

void VulkanAsciiConsumer::Process_vkDestroyShaderModule(
    HandleId                                    device,
    HandleId                                    shaderModule,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyShaderModule");
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pPipelineCache)
{
    fprintf(GetFile(), "%s\n", "vkCreatePipelineCache");
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineCache(
    HandleId                                    device,
    HandleId                                    pipelineCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyPipelineCache");
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    pipelineCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    fprintf(GetFile(), "%s\n", "vkGetPipelineCacheData");
}

void VulkanAsciiConsumer::Process_vkMergePipelineCaches(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    dstCache,
    uint32_t                                    srcCacheCount,
    const PointerDecoder<HandleId>&             pSrcCaches)
{
    fprintf(GetFile(), "%s\n", "vkMergePipelineCaches");
}

void VulkanAsciiConsumer::Process_vkCreateGraphicsPipelines(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pPipelines)
{
    fprintf(GetFile(), "%s\n", "vkCreateGraphicsPipelines");
}

void VulkanAsciiConsumer::Process_vkCreateComputePipelines(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    pipelineCache,
    uint32_t                                    createInfoCount,
    const StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pPipelines)
{
    fprintf(GetFile(), "%s\n", "vkCreateComputePipelines");
}

void VulkanAsciiConsumer::Process_vkDestroyPipeline(
    HandleId                                    device,
    HandleId                                    pipeline,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyPipeline");
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pPipelineLayout)
{
    fprintf(GetFile(), "%s\n", "vkCreatePipelineLayout");
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineLayout(
    HandleId                                    device,
    HandleId                                    pipelineLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyPipelineLayout");
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSamplerCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSampler)
{
    fprintf(GetFile(), "%s\n", "vkCreateSampler");
}

void VulkanAsciiConsumer::Process_vkDestroySampler(
    HandleId                                    device,
    HandleId                                    sampler,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySampler");
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSetLayout)
{
    fprintf(GetFile(), "%s\n", "vkCreateDescriptorSetLayout");
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorSetLayout(
    HandleId                                    device,
    HandleId                                    descriptorSetLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDescriptorSetLayout");
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pDescriptorPool)
{
    fprintf(GetFile(), "%s\n", "vkCreateDescriptorPool");
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorPool(
    HandleId                                    device,
    HandleId                                    descriptorPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDescriptorPool");
}

void VulkanAsciiConsumer::Process_vkResetDescriptorPool(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    fprintf(GetFile(), "%s\n", "vkResetDescriptorPool");
}

void VulkanAsciiConsumer::Process_vkAllocateDescriptorSets(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorSetAllocateInfo>& pAllocateInfo,
    const PointerDecoder<HandleId>&             pDescriptorSets)
{
    fprintf(GetFile(), "%s\n", "vkAllocateDescriptorSets");
}

void VulkanAsciiConsumer::Process_vkFreeDescriptorSets(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    descriptorPool,
    uint32_t                                    descriptorSetCount,
    const PointerDecoder<HandleId>&             pDescriptorSets)
{
    fprintf(GetFile(), "%s\n", "vkFreeDescriptorSets");
}

void VulkanAsciiConsumer::Process_vkUpdateDescriptorSets(
    HandleId                                    device,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    const StructPointerDecoder<Decoded_VkCopyDescriptorSet>& pDescriptorCopies)
{
    fprintf(GetFile(), "%s\n", "vkUpdateDescriptorSets");
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkFramebufferCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pFramebuffer)
{
    fprintf(GetFile(), "%s\n", "vkCreateFramebuffer");
}

void VulkanAsciiConsumer::Process_vkDestroyFramebuffer(
    HandleId                                    device,
    HandleId                                    framebuffer,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyFramebuffer");
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pRenderPass)
{
    fprintf(GetFile(), "%s\n", "vkCreateRenderPass");
}

void VulkanAsciiConsumer::Process_vkDestroyRenderPass(
    HandleId                                    device,
    HandleId                                    renderPass,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyRenderPass");
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    HandleId                                    device,
    HandleId                                    renderPass,
    const StructPointerDecoder<Decoded_VkExtent2D>& pGranularity)
{
    fprintf(GetFile(), "%s\n", "vkGetRenderAreaGranularity");
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pCommandPool)
{
    fprintf(GetFile(), "%s\n", "vkCreateCommandPool");
}

void VulkanAsciiConsumer::Process_vkDestroyCommandPool(
    HandleId                                    device,
    HandleId                                    commandPool,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyCommandPool");
}

void VulkanAsciiConsumer::Process_vkResetCommandPool(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    commandPool,
    VkCommandPoolResetFlags                     flags)
{
    fprintf(GetFile(), "%s\n", "vkResetCommandPool");
}

void VulkanAsciiConsumer::Process_vkAllocateCommandBuffers(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkCommandBufferAllocateInfo>& pAllocateInfo,
    const PointerDecoder<HandleId>&             pCommandBuffers)
{
    fprintf(GetFile(), "%s\n", "vkAllocateCommandBuffers");
}

void VulkanAsciiConsumer::Process_vkFreeCommandBuffers(
    HandleId                                    device,
    HandleId                                    commandPool,
    uint32_t                                    commandBufferCount,
    const PointerDecoder<HandleId>&             pCommandBuffers)
{
    fprintf(GetFile(), "%s\n", "vkFreeCommandBuffers");
}

void VulkanAsciiConsumer::Process_vkBeginCommandBuffer(
    VkResult                                    returnValue,
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>& pBeginInfo)
{
    fprintf(GetFile(), "%s\n", "vkBeginCommandBuffer");
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    VkResult                                    returnValue,
    HandleId                                    commandBuffer)
{
    fprintf(GetFile(), "%s\n", "vkEndCommandBuffer");
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    VkResult                                    returnValue,
    HandleId                                    commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    fprintf(GetFile(), "%s\n", "vkResetCommandBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    HandleId                                    commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    HandleId                                    pipeline)
{
    fprintf(GetFile(), "%s\n", "vkCmdBindPipeline");
}

void VulkanAsciiConsumer::Process_vkCmdSetViewport(
    HandleId                                    commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewport>& pViewports)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetViewport");
}

void VulkanAsciiConsumer::Process_vkCmdSetScissor(
    HandleId                                    commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pScissors)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetScissor");
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    HandleId                                    commandBuffer,
    float                                       lineWidth)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetLineWidth");
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBias(
    HandleId                                    commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetDepthBias");
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    HandleId                                    commandBuffer,
    const PointerDecoder<float>&                blendConstants)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetBlendConstants");
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    HandleId                                    commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetDepthBounds");
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    HandleId                                    commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetStencilCompareMask");
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    HandleId                                    commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetStencilWriteMask");
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    HandleId                                    commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetStencilReference");
}

void VulkanAsciiConsumer::Process_vkCmdBindDescriptorSets(
    HandleId                                    commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    HandleId                                    layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    const PointerDecoder<HandleId>&             pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    const PointerDecoder<uint32_t>&             pDynamicOffsets)
{
    fprintf(GetFile(), "%s\n", "vkCmdBindDescriptorSets");
}

void VulkanAsciiConsumer::Process_vkCmdBindIndexBuffer(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    fprintf(GetFile(), "%s\n", "vkCmdBindIndexBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers(
    HandleId                                    commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    const PointerDecoder<HandleId>&             pBuffers,
    const PointerDecoder<VkDeviceSize>&         pOffsets)
{
    fprintf(GetFile(), "%s\n", "vkCmdBindVertexBuffers");
}

void VulkanAsciiConsumer::Process_vkCmdDraw(
    HandleId                                    commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    fprintf(GetFile(), "%s\n", "vkCmdDraw");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexed(
    HandleId                                    commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndexed");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirect(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndirect");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirect(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndexedIndirect");
}

void VulkanAsciiConsumer::Process_vkCmdDispatch(
    HandleId                                    commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    fprintf(GetFile(), "%s\n", "vkCmdDispatch");
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset)
{
    fprintf(GetFile(), "%s\n", "vkCmdDispatchIndirect");
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer(
    HandleId                                    commandBuffer,
    HandleId                                    srcBuffer,
    HandleId                                    dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferCopy>& pRegions)
{
    fprintf(GetFile(), "%s\n", "vkCmdCopyBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage(
    HandleId                                    commandBuffer,
    HandleId                                    srcImage,
    VkImageLayout                               srcImageLayout,
    HandleId                                    dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageCopy>& pRegions)
{
    fprintf(GetFile(), "%s\n", "vkCmdCopyImage");
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage(
    HandleId                                    commandBuffer,
    HandleId                                    srcImage,
    VkImageLayout                               srcImageLayout,
    HandleId                                    dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageBlit>& pRegions,
    VkFilter                                    filter)
{
    fprintf(GetFile(), "%s\n", "vkCmdBlitImage");
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage(
    HandleId                                    commandBuffer,
    HandleId                                    srcBuffer,
    HandleId                                    dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    fprintf(GetFile(), "%s\n", "vkCmdCopyBufferToImage");
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer(
    HandleId                                    commandBuffer,
    HandleId                                    srcImage,
    VkImageLayout                               srcImageLayout,
    HandleId                                    dstBuffer,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkBufferImageCopy>& pRegions)
{
    fprintf(GetFile(), "%s\n", "vkCmdCopyImageToBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdUpdateBuffer(
    HandleId                                    commandBuffer,
    HandleId                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    fprintf(GetFile(), "%s\n", "vkCmdUpdateBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdFillBuffer(
    HandleId                                    commandBuffer,
    HandleId                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    fprintf(GetFile(), "%s\n", "vkCmdFillBuffer");
}

void VulkanAsciiConsumer::Process_vkCmdClearColorImage(
    HandleId                                    commandBuffer,
    HandleId                                    image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearColorValue>& pColor,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    fprintf(GetFile(), "%s\n", "vkCmdClearColorImage");
}

void VulkanAsciiConsumer::Process_vkCmdClearDepthStencilImage(
    HandleId                                    commandBuffer,
    HandleId                                    image,
    VkImageLayout                               imageLayout,
    const StructPointerDecoder<Decoded_VkClearDepthStencilValue>& pDepthStencil,
    uint32_t                                    rangeCount,
    const StructPointerDecoder<Decoded_VkImageSubresourceRange>& pRanges)
{
    fprintf(GetFile(), "%s\n", "vkCmdClearDepthStencilImage");
}

void VulkanAsciiConsumer::Process_vkCmdClearAttachments(
    HandleId                                    commandBuffer,
    uint32_t                                    attachmentCount,
    const StructPointerDecoder<Decoded_VkClearAttachment>& pAttachments,
    uint32_t                                    rectCount,
    const StructPointerDecoder<Decoded_VkClearRect>& pRects)
{
    fprintf(GetFile(), "%s\n", "vkCmdClearAttachments");
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage(
    HandleId                                    commandBuffer,
    HandleId                                    srcImage,
    VkImageLayout                               srcImageLayout,
    HandleId                                    dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    const StructPointerDecoder<Decoded_VkImageResolve>& pRegions)
{
    fprintf(GetFile(), "%s\n", "vkCmdResolveImage");
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent(
    HandleId                                    commandBuffer,
    HandleId                                    event,
    VkPipelineStageFlags                        stageMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetEvent");
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    HandleId                                    commandBuffer,
    HandleId                                    event,
    VkPipelineStageFlags                        stageMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdResetEvent");
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents(
    HandleId                                    commandBuffer,
    uint32_t                                    eventCount,
    const PointerDecoder<HandleId>&             pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    const StructPointerDecoder<Decoded_VkMemoryBarrier>& pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkBufferMemoryBarrier>& pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    fprintf(GetFile(), "%s\n", "vkCmdWaitEvents");
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier(
    HandleId                                    commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    const StructPointerDecoder<Decoded_VkMemoryBarrier>& pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkBufferMemoryBarrier>& pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    const StructPointerDecoder<Decoded_VkImageMemoryBarrier>& pImageMemoryBarriers)
{
    fprintf(GetFile(), "%s\n", "vkCmdPipelineBarrier");
}

void VulkanAsciiConsumer::Process_vkCmdBeginQuery(
    HandleId                                    commandBuffer,
    HandleId                                    queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    fprintf(GetFile(), "%s\n", "vkCmdBeginQuery");
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    HandleId                                    commandBuffer,
    HandleId                                    queryPool,
    uint32_t                                    query)
{
    fprintf(GetFile(), "%s\n", "vkCmdEndQuery");
}

void VulkanAsciiConsumer::Process_vkCmdResetQueryPool(
    HandleId                                    commandBuffer,
    HandleId                                    queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    fprintf(GetFile(), "%s\n", "vkCmdResetQueryPool");
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp(
    HandleId                                    commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    HandleId                                    queryPool,
    uint32_t                                    query)
{
    fprintf(GetFile(), "%s\n", "vkCmdWriteTimestamp");
}

void VulkanAsciiConsumer::Process_vkCmdCopyQueryPoolResults(
    HandleId                                    commandBuffer,
    HandleId                                    queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    HandleId                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    fprintf(GetFile(), "%s\n", "vkCmdCopyQueryPoolResults");
}

void VulkanAsciiConsumer::Process_vkCmdPushConstants(
    HandleId                                    commandBuffer,
    HandleId                                    layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    const PointerDecoder<uint8_t>&              pValues)
{
    fprintf(GetFile(), "%s\n", "vkCmdPushConstants");
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    VkSubpassContents                           contents)
{
    fprintf(GetFile(), "%s\n", "vkCmdBeginRenderPass");
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    HandleId                                    commandBuffer,
    VkSubpassContents                           contents)
{
    fprintf(GetFile(), "%s\n", "vkCmdNextSubpass");
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    HandleId                                    commandBuffer)
{
    fprintf(GetFile(), "%s\n", "vkCmdEndRenderPass");
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    HandleId                                    commandBuffer,
    uint32_t                                    commandBufferCount,
    const PointerDecoder<HandleId>&             pCommandBuffers)
{
    fprintf(GetFile(), "%s\n", "vkCmdExecuteCommands");
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory2(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    fprintf(GetFile(), "%s\n", "vkBindBufferMemory2");
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    fprintf(GetFile(), "%s\n", "vkBindImageMemory2");
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    HandleId                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceGroupPeerMemoryFeatures");
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    HandleId                                    commandBuffer,
    uint32_t                                    deviceMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetDeviceMask");
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBase(
    HandleId                                    commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    fprintf(GetFile(), "%s\n", "vkCmdDispatchBase");
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    fprintf(GetFile(), "%s\n", "vkEnumeratePhysicalDeviceGroups");
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageMemoryRequirements2");
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetBufferMemoryRequirements2");
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageSparseMemoryRequirements2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFeatures2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceProperties2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFormatProperties2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceImageFormatProperties2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceQueueFamilyProperties2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceMemoryProperties2");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSparseImageFormatProperties2");
}

void VulkanAsciiConsumer::Process_vkTrimCommandPool(
    HandleId                                    device,
    HandleId                                    commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    fprintf(GetFile(), "%s\n", "vkTrimCommandPool");
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDeviceQueueInfo2>& pQueueInfo,
    const PointerDecoder<HandleId>&             pQueue)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceQueue2");
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pYcbcrConversion)
{
    fprintf(GetFile(), "%s\n", "vkCreateSamplerYcbcrConversion");
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversion(
    HandleId                                    device,
    HandleId                                    ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySamplerYcbcrConversion");
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pDescriptorUpdateTemplate)
{
    fprintf(GetFile(), "%s\n", "vkCreateDescriptorUpdateTemplate");
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    HandleId                                    device,
    HandleId                                    descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDescriptorUpdateTemplate");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalBufferProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalFenceProperties");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalSemaphoreProperties");
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    fprintf(GetFile(), "%s\n", "vkGetDescriptorSetLayoutSupport");
}

void VulkanAsciiConsumer::Process_vkDestroySurfaceKHR(
    HandleId                                    instance,
    HandleId                                    surface,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex,
    HandleId                                    surface,
    const PointerDecoder<VkBool32>&             pSupported)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceSupportKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>& pSurfaceCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    surface,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormatKHR>& pSurfaceFormats)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceFormatsKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    surface,
    const PointerDecoder<uint32_t>&             pPresentModeCount,
    const PointerDecoder<VkPresentModeKHR>&     pPresentModes)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfacePresentModesKHR");
}

void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSwapchain)
{
    fprintf(GetFile(), "%s\n", "vkCreateSwapchainKHR");
}

void VulkanAsciiConsumer::Process_vkDestroySwapchainKHR(
    HandleId                                    device,
    HandleId                                    swapchain,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySwapchainKHR");
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain,
    const PointerDecoder<uint32_t>&             pSwapchainImageCount,
    const PointerDecoder<HandleId>&             pSwapchainImages)
{
    fprintf(GetFile(), "%s\n", "vkGetSwapchainImagesKHR");
}

void VulkanAsciiConsumer::Process_vkAcquireNextImageKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain,
    uint64_t                                    timeout,
    HandleId                                    semaphore,
    HandleId                                    fence,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    fprintf(GetFile(), "%s\n", "vkAcquireNextImageKHR");
}

void VulkanAsciiConsumer::Process_vkQueuePresentKHR(
    VkResult                                    returnValue,
    HandleId                                    queue,
    const StructPointerDecoder<Decoded_VkPresentInfoKHR>& pPresentInfo)
{
    fprintf(GetFile(), "%s\n", "vkQueuePresentKHR");
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>& pDeviceGroupPresentCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceGroupPresentCapabilitiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    surface,
    const PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>& pModes)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceGroupSurfacePresentModesKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    surface,
    const PointerDecoder<uint32_t>&             pRectCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pRects)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDevicePresentRectanglesKHR");
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>& pAcquireInfo,
    const PointerDecoder<uint32_t>&             pImageIndex)
{
    fprintf(GetFile(), "%s\n", "vkAcquireNextImage2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceDisplayPropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    planeIndex,
    const PointerDecoder<uint32_t>&             pDisplayCount,
    const PointerDecoder<HandleId>&             pDisplays)
{
    fprintf(GetFile(), "%s\n", "vkGetDisplayPlaneSupportedDisplaysKHR");
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetDisplayModePropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkCreateDisplayModeKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    display,
    const StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pMode)
{
    fprintf(GetFile(), "%s\n", "vkCreateDisplayModeKHR");
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    mode,
    uint32_t                                    planeIndex,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>& pCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetDisplayPlaneCapabilitiesKHR");
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateDisplayPlaneSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkCreateSharedSwapchainsKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    swapchainCount,
    const StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>& pCreateInfos,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSwapchains)
{
    fprintf(GetFile(), "%s\n", "vkCreateSharedSwapchainsKHR");
}

void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateXlibSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    VkBool32                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    uint32_t                                    visualID)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceXlibPresentationSupportKHR");
}

void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateXcbSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    VkBool32                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceXcbPresentationSupportKHR");
}

void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateWaylandSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkBool32                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
}

void VulkanAsciiConsumer::Process_vkCreateMirSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkMirSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateMirSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMirPresentationSupportKHR(
    VkBool32                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceMirPresentationSupportKHR");
}

void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateAndroidSurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateWin32SurfaceKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    VkBool32                                    returnValue,
    HandleId                                    physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceWin32PresentationSupportKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>& pFeatures)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFeatures2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    const StructPointerDecoder<Decoded_VkFormatProperties2>& pFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceFormatProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>& pImageFormatInfo,
    const StructPointerDecoder<Decoded_VkImageFormatProperties2>& pImageFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceImageFormatProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pQueueFamilyPropertyCount,
    const StructPointerDecoder<Decoded_VkQueueFamilyProperties2>& pQueueFamilyProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>& pMemoryProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceMemoryProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>& pFormatInfo,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    HandleId                                    device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    const PointerDecoder<VkPeerMemoryFeatureFlags>& pPeerMemoryFeatures)
{
    fprintf(GetFile(), "%s\n", "vkGetDeviceGroupPeerMemoryFeaturesKHR");
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    HandleId                                    commandBuffer,
    uint32_t                                    deviceMask)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetDeviceMaskKHR");
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBaseKHR(
    HandleId                                    commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    fprintf(GetFile(), "%s\n", "vkCmdDispatchBaseKHR");
}

void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    HandleId                                    device,
    HandleId                                    commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    fprintf(GetFile(), "%s\n", "vkTrimCommandPoolKHR");
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const PointerDecoder<uint32_t>&             pPhysicalDeviceGroupCount,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>& pPhysicalDeviceGroupProperties)
{
    fprintf(GetFile(), "%s\n", "vkEnumeratePhysicalDeviceGroupsKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>& pExternalBufferInfo,
    const StructPointerDecoder<Decoded_VkExternalBufferProperties>& pExternalBufferProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryWin32HandleKHR");
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    const StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>& pMemoryWin32HandleProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryWin32HandlePropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryFdKHR");
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    const StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>& pMemoryFdProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryFdPropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>& pExternalSemaphoreInfo,
    const StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>& pExternalSemaphoreProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>& pImportSemaphoreWin32HandleInfo)
{
    fprintf(GetFile(), "%s\n", "vkImportSemaphoreWin32HandleKHR");
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    fprintf(GetFile(), "%s\n", "vkGetSemaphoreWin32HandleKHR");
}

void VulkanAsciiConsumer::Process_vkImportSemaphoreFdKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>& pImportSemaphoreFdInfo)
{
    fprintf(GetFile(), "%s\n", "vkImportSemaphoreFdKHR");
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    fprintf(GetFile(), "%s\n", "vkGetSemaphoreFdKHR");
}

void VulkanAsciiConsumer::Process_vkCmdPushDescriptorSetKHR(
    HandleId                                    commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    HandleId                                    layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const StructPointerDecoder<Decoded_VkWriteDescriptorSet>& pDescriptorWrites)
{
    fprintf(GetFile(), "%s\n", "vkCmdPushDescriptorSetKHR");
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pDescriptorUpdateTemplate)
{
    fprintf(GetFile(), "%s\n", "vkCreateDescriptorUpdateTemplateKHR");
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    HandleId                                    device,
    HandleId                                    descriptorUpdateTemplate,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDescriptorUpdateTemplateKHR");
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkRenderPassCreateInfo2KHR>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pRenderPass)
{
    fprintf(GetFile(), "%s\n", "vkCreateRenderPass2KHR");
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2KHR(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkRenderPassBeginInfo>& pRenderPassBegin,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdBeginRenderPass2KHR");
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2KHR(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassBeginInfoKHR>& pSubpassBeginInfo,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdNextSubpass2KHR");
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkSubpassEndInfoKHR>& pSubpassEndInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdEndRenderPass2KHR");
}

void VulkanAsciiConsumer::Process_vkGetSwapchainStatusKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain)
{
    fprintf(GetFile(), "%s\n", "vkGetSwapchainStatusKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>& pExternalFenceInfo,
    const StructPointerDecoder<Decoded_VkExternalFenceProperties>& pExternalFenceProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}

void VulkanAsciiConsumer::Process_vkImportFenceWin32HandleKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>& pImportFenceWin32HandleInfo)
{
    fprintf(GetFile(), "%s\n", "vkImportFenceWin32HandleKHR");
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>& pGetWin32HandleInfo,
    const PointerDecoder<uint64_t>&             pHandle)
{
    fprintf(GetFile(), "%s\n", "vkGetFenceWin32HandleKHR");
}

void VulkanAsciiConsumer::Process_vkImportFenceFdKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>& pImportFenceFdInfo)
{
    fprintf(GetFile(), "%s\n", "vkImportFenceFdKHR");
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>& pGetFdInfo,
    const PointerDecoder<int>&                  pFd)
{
    fprintf(GetFile(), "%s\n", "vkGetFenceFdKHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>& pSurfaceCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>& pSurfaceInfo,
    const PointerDecoder<uint32_t>&             pSurfaceFormatCount,
    const StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>& pSurfaceFormats)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceFormats2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayProperties2KHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceDisplayProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    display,
    const PointerDecoder<uint32_t>&             pPropertyCount,
    const StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetDisplayModeProperties2KHR");
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>& pDisplayPlaneInfo,
    const StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>& pCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetDisplayPlaneCapabilities2KHR");
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageMemoryRequirements2KHR");
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>& pInfo,
    const StructPointerDecoder<Decoded_VkMemoryRequirements2>& pMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetBufferMemoryRequirements2KHR");
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>& pInfo,
    const PointerDecoder<uint32_t>&             pSparseMemoryRequirementCount,
    const StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>& pSparseMemoryRequirements)
{
    fprintf(GetFile(), "%s\n", "vkGetImageSparseMemoryRequirements2KHR");
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pYcbcrConversion)
{
    fprintf(GetFile(), "%s\n", "vkCreateSamplerYcbcrConversionKHR");
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    HandleId                                    device,
    HandleId                                    ycbcrConversion,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroySamplerYcbcrConversionKHR");
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory2KHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>& pBindInfos)
{
    fprintf(GetFile(), "%s\n", "vkBindBufferMemory2KHR");
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2KHR(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint32_t                                    bindInfoCount,
    const StructPointerDecoder<Decoded_VkBindImageMemoryInfo>& pBindInfos)
{
    fprintf(GetFile(), "%s\n", "vkBindImageMemory2KHR");
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>& pSupport)
{
    fprintf(GetFile(), "%s\n", "vkGetDescriptorSetLayoutSupportKHR");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountKHR(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    HandleId                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndirectCountKHR");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    HandleId                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndexedIndirectCountKHR");
}

void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pCallback)
{
    fprintf(GetFile(), "%s\n", "vkCreateDebugReportCallbackEXT");
}

void VulkanAsciiConsumer::Process_vkDestroyDebugReportCallbackEXT(
    HandleId                                    instance,
    HandleId                                    callback,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDebugReportCallbackEXT");
}

void VulkanAsciiConsumer::Process_vkDebugReportMessageEXT(
    HandleId                                    instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const StringDecoder&                        pLayerPrefix,
    const StringDecoder&                        pMessage)
{
    fprintf(GetFile(), "%s\n", "vkDebugReportMessageEXT");
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>& pTagInfo)
{
    fprintf(GetFile(), "%s\n", "vkDebugMarkerSetObjectTagEXT");
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>& pNameInfo)
{
    fprintf(GetFile(), "%s\n", "vkDebugMarkerSetObjectNameEXT");
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdDebugMarkerBeginEXT");
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    HandleId                                    commandBuffer)
{
    fprintf(GetFile(), "%s\n", "vkCmdDebugMarkerEndEXT");
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>& pMarkerInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdDebugMarkerInsertEXT");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountAMD(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    HandleId                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndirectCountAMD");
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    HandleId                                    commandBuffer,
    HandleId                                    buffer,
    VkDeviceSize                                offset,
    HandleId                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    fprintf(GetFile(), "%s\n", "vkCmdDrawIndexedIndirectCountAMD");
}

void VulkanAsciiConsumer::Process_vkGetShaderInfoAMD(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    const PointerDecoder<size_t>&               pInfoSize,
    const PointerDecoder<uint8_t>&              pInfo)
{
    fprintf(GetFile(), "%s\n", "vkGetShaderInfoAMD");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    const StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>& pExternalImageFormatProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    const PointerDecoder<uint64_t>&             pHandle)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryWin32HandleNV");
}

void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateViSurfaceNN");
}

void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>& pConditionalRenderingBegin)
{
    fprintf(GetFile(), "%s\n", "vkCmdBeginConditionalRenderingEXT");
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    HandleId                                    commandBuffer)
{
    fprintf(GetFile(), "%s\n", "vkCmdEndConditionalRenderingEXT");
}

void VulkanAsciiConsumer::Process_vkCmdProcessCommandsNVX(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdProcessCommandsInfoNVX>& pProcessCommandsInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdProcessCommandsNVX");
}

void VulkanAsciiConsumer::Process_vkCmdReserveSpaceForCommandsNVX(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkCmdReserveSpaceForCommandsInfoNVX>& pReserveSpaceInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdReserveSpaceForCommandsNVX");
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNVX(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pIndirectCommandsLayout)
{
    fprintf(GetFile(), "%s\n", "vkCreateIndirectCommandsLayoutNVX");
}

void VulkanAsciiConsumer::Process_vkDestroyIndirectCommandsLayoutNVX(
    HandleId                                    device,
    HandleId                                    indirectCommandsLayout,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyIndirectCommandsLayoutNVX");
}

void VulkanAsciiConsumer::Process_vkCreateObjectTableNVX(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkObjectTableCreateInfoNVX>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pObjectTable)
{
    fprintf(GetFile(), "%s\n", "vkCreateObjectTableNVX");
}

void VulkanAsciiConsumer::Process_vkDestroyObjectTableNVX(
    HandleId                                    device,
    HandleId                                    objectTable,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyObjectTableNVX");
}

void VulkanAsciiConsumer::Process_vkUnregisterObjectsNVX(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    objectTable,
    uint32_t                                    objectCount,
    const PointerDecoder<VkObjectEntryTypeNVX>& pObjectEntryTypes,
    const PointerDecoder<uint32_t>&             pObjectIndices)
{
    fprintf(GetFile(), "%s\n", "vkUnregisterObjectsNVX");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    HandleId                                    physicalDevice,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsFeaturesNVX>& pFeatures,
    const StructPointerDecoder<Decoded_VkDeviceGeneratedCommandsLimitsNVX>& pLimits)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingNV(
    HandleId                                    commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const StructPointerDecoder<Decoded_VkViewportWScalingNV>& pViewportWScalings)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetViewportWScalingNV");
}

void VulkanAsciiConsumer::Process_vkReleaseDisplayEXT(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    display)
{
    fprintf(GetFile(), "%s\n", "vkReleaseDisplayEXT");
}

void VulkanAsciiConsumer::Process_vkAcquireXlibDisplayEXT(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    uint64_t                                    dpy,
    HandleId                                    display)
{
    fprintf(GetFile(), "%s\n", "vkAcquireXlibDisplayEXT");
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    uint64_t                                    dpy,
    uint32_t                                    rrOutput,
    const PointerDecoder<HandleId>&             pDisplay)
{
    fprintf(GetFile(), "%s\n", "vkGetRandROutputDisplayEXT");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    VkResult                                    returnValue,
    HandleId                                    physicalDevice,
    HandleId                                    surface,
    const StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>& pSurfaceCapabilities)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
}

void VulkanAsciiConsumer::Process_vkDisplayPowerControlEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    display,
    const StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>& pDisplayPowerInfo)
{
    fprintf(GetFile(), "%s\n", "vkDisplayPowerControlEXT");
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>& pDeviceEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pFence)
{
    fprintf(GetFile(), "%s\n", "vkRegisterDeviceEventEXT");
}

void VulkanAsciiConsumer::Process_vkRegisterDisplayEventEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    display,
    const StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>& pDisplayEventInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pFence)
{
    fprintf(GetFile(), "%s\n", "vkRegisterDisplayEventEXT");
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    const PointerDecoder<uint64_t>&             pCounterValue)
{
    fprintf(GetFile(), "%s\n", "vkGetSwapchainCounterEXT");
}

void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain,
    const StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>& pDisplayTimingProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetRefreshCycleDurationGOOGLE");
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    swapchain,
    const PointerDecoder<uint32_t>&             pPresentationTimingCount,
    const StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>& pPresentationTimings)
{
    fprintf(GetFile(), "%s\n", "vkGetPastPresentationTimingGOOGLE");
}

void VulkanAsciiConsumer::Process_vkCmdSetDiscardRectangleEXT(
    HandleId                                    commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    const StructPointerDecoder<Decoded_VkRect2D>& pDiscardRectangles)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetDiscardRectangleEXT");
}

void VulkanAsciiConsumer::Process_vkSetHdrMetadataEXT(
    HandleId                                    device,
    uint32_t                                    swapchainCount,
    const PointerDecoder<HandleId>&             pSwapchains,
    const StructPointerDecoder<Decoded_VkHdrMetadataEXT>& pMetadata)
{
    fprintf(GetFile(), "%s\n", "vkSetHdrMetadataEXT");
}

void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateIOSSurfaceMVK");
}

void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pSurface)
{
    fprintf(GetFile(), "%s\n", "vkCreateMacOSSurfaceMVK");
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>& pNameInfo)
{
    fprintf(GetFile(), "%s\n", "vkSetDebugUtilsObjectNameEXT");
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>& pTagInfo)
{
    fprintf(GetFile(), "%s\n", "vkSetDebugUtilsObjectTagEXT");
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    HandleId                                    queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    fprintf(GetFile(), "%s\n", "vkQueueBeginDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    HandleId                                    queue)
{
    fprintf(GetFile(), "%s\n", "vkQueueEndDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    HandleId                                    queue,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    fprintf(GetFile(), "%s\n", "vkQueueInsertDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdBeginDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    HandleId                                    commandBuffer)
{
    fprintf(GetFile(), "%s\n", "vkCmdEndDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>& pLabelInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdInsertDebugUtilsLabelEXT");
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    VkResult                                    returnValue,
    HandleId                                    instance,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pMessenger)
{
    fprintf(GetFile(), "%s\n", "vkCreateDebugUtilsMessengerEXT");
}

void VulkanAsciiConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    HandleId                                    instance,
    HandleId                                    messenger,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyDebugUtilsMessengerEXT");
}

void VulkanAsciiConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    HandleId                                    instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    const StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>& pCallbackData)
{
    fprintf(GetFile(), "%s\n", "vkSubmitDebugUtilsMessageEXT");
}

void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    VkResult                                    returnValue,
    HandleId                                    device,
    uint64_t                                    buffer,
    const StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>& pProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetAndroidHardwareBufferPropertiesANDROID");
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>& pInfo,
    const PointerDecoder<uint64_t>&             pBuffer)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryAndroidHardwareBufferANDROID");
}

void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    HandleId                                    commandBuffer,
    const StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>& pSampleLocationsInfo)
{
    fprintf(GetFile(), "%s\n", "vkCmdSetSampleLocationsEXT");
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    HandleId                                    physicalDevice,
    VkSampleCountFlagBits                       samples,
    const StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>& pMultisampleProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}

void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    const StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>& pCreateInfo,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator,
    const PointerDecoder<HandleId>&             pValidationCache)
{
    fprintf(GetFile(), "%s\n", "vkCreateValidationCacheEXT");
}

void VulkanAsciiConsumer::Process_vkDestroyValidationCacheEXT(
    HandleId                                    device,
    HandleId                                    validationCache,
    const StructPointerDecoder<Decoded_VkAllocationCallbacks>& pAllocator)
{
    fprintf(GetFile(), "%s\n", "vkDestroyValidationCacheEXT");
}

void VulkanAsciiConsumer::Process_vkMergeValidationCachesEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    dstCache,
    uint32_t                                    srcCacheCount,
    const PointerDecoder<HandleId>&             pSrcCaches)
{
    fprintf(GetFile(), "%s\n", "vkMergeValidationCachesEXT");
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    HandleId                                    validationCache,
    const PointerDecoder<size_t>&               pDataSize,
    const PointerDecoder<uint8_t>&              pData)
{
    fprintf(GetFile(), "%s\n", "vkGetValidationCacheDataEXT");
}

void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    VkResult                                    returnValue,
    HandleId                                    device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    const StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>& pMemoryHostPointerProperties)
{
    fprintf(GetFile(), "%s\n", "vkGetMemoryHostPointerPropertiesEXT");
}

void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarkerAMD(
    HandleId                                    commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    HandleId                                    dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    fprintf(GetFile(), "%s\n", "vkCmdWriteBufferMarkerAMD");
}

BRIMSTONE_END_NAMESPACE(format)
BRIMSTONE_END_NAMESPACE(brimstone)