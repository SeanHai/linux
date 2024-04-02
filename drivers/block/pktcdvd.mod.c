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
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x28cde093, "no_llseek" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xbbcc03c5, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xa047947, "class_destroy" },
	{ 0x6bddef80, "misc_register" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8313decc, "bioset_init" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x9eefa94b, "bio_list_copy_data" },
	{ 0xa9017218, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0xf7d6636f, "current_task" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x4ea1cc1a, "bio_reset" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x1b94d5, "bio_devname" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0xd5825ce3, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x32195455, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xfc128542, "bio_chain" },
	{ 0x58f9dbc, "bio_split" },
	{ 0xd1dd8665, "blk_queue_split" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x2ca66c9a, "bd_set_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x2df52479, "device_create" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x510145f7, "bdevname" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x69e28203, "set_blocksize" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x14f56a89, "blkdev_get" },
	{ 0x2ec526d1, "bdget" },
	{ 0x4b78f6eb, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x99ddfea0, "__blkdev_driver_ioctl" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0x2612ff0c, "put_disk" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x4de931cc, "blkdev_put" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x2cec6038, "kobject_put" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x74b55fe, "mempool_free" },
	{ 0x5484198, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdde3448f, "bio_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0x5ba4171c, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x1df0f826, "blk_rq_map_kern" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0xc7f4b92, "single_open" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "6A28F90AE7E96F57EF5C93A");
MODULE_INFO(rhelversion, "8.0");
