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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xef7618b6, "blk_put_queue" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x787b953, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x36ab07b9, "blk_get_queue" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xdf30c245, "idr_find" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xb98cf1d0, "scsi_autopm_get_device" },
	{ 0xf787ef43, "scsi_autopm_put_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0x9e62713, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xf8bd7348, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf7d6636f, "current_task" },
	{ 0x1d1a0cbb, "blk_rq_map_user" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfcbfe962, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xfb578fc5, "memset" },
	{ 0x9af36e0c, "get_user_pages_fast" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0xcab60fa6, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xa1d0590c, "scsi_set_medium_removal" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2df52479, "device_create" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0x28318305, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x4c89f920, "cdev_del" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B02D5945CF6F02EDB5D6E49");
MODULE_INFO(rhelversion, "8.0");
