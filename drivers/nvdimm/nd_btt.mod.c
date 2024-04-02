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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x8666a803, "nd_btt_version" },
	{ 0xc6e0025a, "badblocks_check" },
	{ 0xfa4e858e, "generic_end_io_acct" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x8acaadac, "nd_integrity_init" },
	{ 0x2c4d2080, "nvdimm_namespace_capacity" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x40c9f093, "debugfs_create_x32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x2cb2f1f, "nvdimm_namespace_disk_name" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0x762c2cf5, "nd_region_acquire_lane" },
	{ 0x4b78f6eb, "blk_alloc_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x34a57401, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xae45802d, "generic_start_io_acct" },
	{ 0x1e91f3c2, "nd_region_release_lane" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5484198, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x644338b3, "nd_dev_to_uuid" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x6360cac2, "debugfs_create_x64" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf7bd664f, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdae691d, "to_nd_region" },
	{ 0x40b44096, "debugfs_create_u16" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf0c6e6e4, "nvdimm_revalidate_disk" },
	{ 0x28318305, "snprintf" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x34d3207, "page_endio" },
	{ 0xae180b72, "bio_integrity_prep" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm";


MODULE_INFO(srcversion, "7B37EB0B5E50C9FD5BE43EF");
MODULE_INFO(rhelversion, "8.0");
