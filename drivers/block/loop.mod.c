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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf54f23b, "blk_mq_requeue_request" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0xa536ccf4, "blk_mq_unfreeze_queue" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xe8717629, "file_path" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd3b5d39, "vfs_fsync" },
	{ 0xa613e505, "blk_mq_freeze_queue" },
	{ 0x8f103d28, "blk_queue_max_write_zeroes_sectors" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x101557d8, "idr_for_each" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xe8de29eb, "mutex_lock_killable" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0xbef02117, "invalidate_bdev" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xe7354b4f, "vfs_iter_write" },
	{ 0x6bddef80, "misc_register" },
	{ 0xcc56d1bd, "iov_iter_bvec" },
	{ 0x90715eef, "set_device_ro" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6b1bdfb4, "kthread_associate_blkcg" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x2dcc71ba, "zero_fill_bio_iter" },
	{ 0xa0ce30fd, "__kthread_init_worker" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7641fe8d, "blk_register_region" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x787b953, "idr_alloc" },
	{ 0x80ff8e87, "blk_update_request" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x50d83074, "fput" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x2ca66c9a, "bd_set_size" },
	{ 0xdfaf80c3, "kthread_queue_work" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3dedeb29, "vfs_iter_read" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9b0c888, "bdgrab" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x4f386ec7, "blkdev_reread_part" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x2594c5e5, "get_disk_and_module" },
	{ 0x9957a226, "__blkdev_reread_part" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63dac521, "__sb_end_write" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0x81c1dbf4, "fget" },
	{ 0x2c2ac6ec, "__sb_start_write" },
	{ 0xcc91f09c, "kthread_flush_worker" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69e28203, "set_blocksize" },
	{ 0x874dd0d1, "vfs_getattr" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xd63aa88f, "bdput" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3D71AF3926DFBFA6C0C0FA9");
MODULE_INFO(rhelversion, "8.0");
