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
	{ 0x28cde093, "no_llseek" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xb696ff00, "class_interface_unregister" },
	{ 0xc9d2fb8f, "remove_proc_subtree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa047947, "class_destroy" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0xdaa1dda5, "proc_create" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xb2e2dd7f, "scsi_register_interface" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x1d57c007, "blk_trace_startstop" },
	{ 0x2ef1c860, "sg_scsi_ioctl" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0x3c92f5bf, "blk_trace_setup" },
	{ 0xf654831f, "ex_handler_default" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0xd1eb4881, "blk_trace_remove" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8834ee04, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3d8e7d66, "blk_rq_map_user_iov" },
	{ 0xbbb2d957, "import_iovec" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0x1d1a0cbb, "blk_rq_map_user" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0xf8bd7348, "scsi_block_when_processing_errors" },
	{ 0xb98cf1d0, "scsi_autopm_get_device" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x2df52479, "device_create" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x787b953, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xf787ef43, "scsi_autopm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd460abe3, "__task_pid_nr_ns" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xcab60fa6, "blk_rq_unmap_user" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x7c3aaa29, "kstrtoul_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc7f4b92, "single_open" },
	{ 0x101557d8, "idr_for_each" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x41715c18, "seq_puts" },
	{ 0xdf30c245, "idr_find" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcbfe962, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9C3D8B627B76274100CE693");
MODULE_INFO(rhelversion, "8.0");
