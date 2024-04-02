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
	{ 0x40f3e50c, "unregister_md_personality" },
	{ 0x27e0994c, "register_md_personality" },
	{ 0x64c09664, "md_allow_write" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x91715312, "sprintf" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xa076a787, "md_bitmap_close_sync" },
	{ 0xaff713bd, "md_bitmap_cond_end_sync" },
	{ 0x3d91506b, "md_bitmap_start_sync" },
	{ 0xe59da526, "md_flush_request" },
	{ 0x2d12639c, "md_write_start" },
	{ 0xc9c463a7, "md_wait_for_blocked_rdev" },
	{ 0x241931ab, "bio_alloc_mddev" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xf553d0f1, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x1b94d5, "bio_devname" },
	{ 0xb0666003, "submit_bio_wait" },
	{ 0xc790b40a, "bio_trim" },
	{ 0xbf98216f, "rdev_clear_badblocks" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9aa28d24, "md_check_recovery" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x93a4e554, "bio_copy_data" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x4ea1cc1a, "bio_reset" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x56e6aaaa, "md_unregister_thread" },
	{ 0x8f103d28, "blk_queue_max_write_zeroes_sectors" },
	{ 0xaae6569a, "blk_queue_max_write_same_sectors" },
	{ 0xfab303a7, "mddev_init_writes_pending" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8313decc, "bioset_init" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd6bd6997, "md_register_thread" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfc128542, "bio_chain" },
	{ 0x58f9dbc, "bio_split" },
	{ 0xfb578fc5, "memset" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x37b297c6, "__tracepoint_block_bio_remap" },
	{ 0xd5825ce3, "bio_clone_fast" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2645e196, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7864f085, "md_integrity_register" },
	{ 0x336c0ee8, "__trace_note_message" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf7d6636f, "current_task" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbbcc03c5, "bioset_exit" },
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0xc6e0025a, "badblocks_check" },
	{ 0xae3fe1bd, "md_done_sync" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xc570116f, "md_bitmap_end_sync" },
	{ 0xe2766bf3, "md_error" },
	{ 0x35c48b33, "rdev_set_badblocks" },
	{ 0x9f8a4f50, "sync_page_io" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x67ae78d1, "disk_stack_limits" },
	{ 0x22805c3e, "md_integrity_add_rdev" },
	{ 0xfc4e2c61, "kernfs_notify" },
	{ 0xdd45a0de, "md_set_array_sectors" },
	{ 0xef71c808, "md_bitmap_resize" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x510145f7, "bdevname" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x7d0f3444, "md_wakeup_thread" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0xf66be0e, "md_bitmap_unplug" },
	{ 0x5484198, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdde3448f, "bio_put" },
	{ 0x3680edd9, "bio_free_pages" },
	{ 0x952d56d0, "md_write_end" },
	{ 0x8aa2f74b, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "77C7B0D70B61B8831134A01");
MODULE_INFO(rhelversion, "8.0");
