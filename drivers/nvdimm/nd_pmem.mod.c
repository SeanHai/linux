#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x21fee4f9, "nd_btt_probe" },
	{ 0x1591d7b9, "to_nd_pfn" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xe48236ac, "devm_init_badblocks" },
	{ 0xea5f6289, "badblocks_clear" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0xfc46ea03, "nvdimm_namespace_common_probe" },
	{ 0x249a67f1, "is_nd_pfn" },
	{ 0xc6e0025a, "badblocks_check" },
	{ 0x7242d92, "put_dax" },
	{ 0xfa4e858e, "generic_end_io_acct" },
	{ 0x8135613, "dax_write_cache" },
	{ 0xbfa3e48b, "devm_nsio_disable" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc1f98ded, "devm_memremap_pages" },
	{ 0x581f81b0, "kernfs_put" },
	{ 0xa29be9f7, "blk_freeze_queue_start" },
	{ 0x553d7f9, "nd_dax_probe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0xcbb51aee, "blk_alloc_queue_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb2ed405, "nd_pfn_probe" },
	{ 0x1bc69950, "nvdimm_flush" },
	{ 0xd935d088, "is_nd_btt" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x2cb2f1f, "nvdimm_namespace_disk_name" },
	{ 0x8b373e28, "devm_nsio_enable" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xf7d6636f, "current_task" },
	{ 0x34a57401, "to_nd_btt" },
	{ 0xc78dc210, "pmem_sector_size" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x5e6f234f, "__nd_driver_register" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xaf53783, "dax_attribute_group" },
	{ 0x5353f7a9, "nvdimm_clear_poison" },
	{ 0x34dd2ccb, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0xdabd3e67, "_copy_to_iter_mcsafe" },
	{ 0xae45802d, "generic_start_io_acct" },
	{ 0x5484198, "bio_endio" },
	{ 0x9279de7c, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xae1e04cc, "nvdimm_has_flush" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xfce95602, "nvdimm_namespace_detach_btt" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0xb0fa0862, "nvdimm_badblocks_populate" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0x53528c9b, "nvdimm_namespace_attach_btt" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc8a6948, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x2612ff0c, "put_disk" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x7f9d081e, "_copy_from_iter_flushcache" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc4e2c61, "kernfs_notify" },
	{ 0xddf72b3c, "alloc_dax" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x8b38b6a3, "__memcpy_mcsafe" },
	{ 0x2deac100, "dev_pagemap_put_ops" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0xfc0e1aa8, "dev_pagemap_get_ops" },
	{ 0xcd7fea4e, "mcsafe_key" },
	{ 0xbdae691d, "to_nd_region" },
	{ 0x4d95d6d1, "memcpy_flushcache" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf0c6e6e4, "nvdimm_revalidate_disk" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0xd22fa6d4, "devm_memremap" },
	{ 0xe376b252, "nvdimm_has_cache" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x34d3207, "page_endio" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm,nd_btt";


MODULE_INFO(srcversion, "1FE1BCBF736C7C684C04A49");
MODULE_INFO(rhelversion, "8.0");
