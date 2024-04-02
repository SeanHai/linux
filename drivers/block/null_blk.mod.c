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
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xea5f6289, "badblocks_clear" },
	{ 0x563e4e5e, "hrtimer_active" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0xc6e0025a, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xa87478f, "radix_tree_delete_item" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x5d70e794, "config_item_put" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xae69b472, "config_item_init_type_name" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xcbb51aee, "blk_alloc_queue_node" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xf7d6636f, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xb43d43fd, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x373db350, "kstrtoint" },
	{ 0x63dbb9c4, "configfs_register_subsystem" },
	{ 0x171ae6a0, "blk_mq_start_stopped_hw_queues" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5484198, "bio_endio" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0xe787139f, "radix_tree_gang_lookup" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x7a8ec00e, "badblocks_show" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x70126934, "badblocks_init" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0x3c173b08, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2dc7de88, "__radix_tree_insert" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0x941fdea4, "blk_queue_flush_queueable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x500ee43d, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x9754ec10, "radix_tree_preload" },
	{ 0xa72a0f5b, "nr_online_nodes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0xaabe8cab, "badblocks_set" },
	{ 0x28318305, "snprintf" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x77bc13a0, "strim" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xeb9a02d7, "config_group_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "74EB0C24BD9DC1914E65E7D");
MODULE_INFO(rhelversion, "8.0");
