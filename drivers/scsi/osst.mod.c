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
	{ 0x227e1d40, "driver_remove_file" },
	{ 0xa047947, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa9597102, "driver_create_file" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf8bd7348, "scsi_block_when_processing_errors" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7d6636f, "current_task" },
	{ 0x1df0f826, "blk_rq_map_kern" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1d1a0cbb, "blk_rq_map_user" },
	{ 0x87b8798d, "sg_next" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c1372e8, "panic" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xfb578fc5, "memset" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0xcab60fa6, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfcbfe962, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xa1d0590c, "scsi_set_medium_removal" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x2df52479, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x27e1a049, "printk" },
	{ 0x28318305, "snprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1D46F99E00E19A7133E0D98");
MODULE_INFO(rhelversion, "8.0");
