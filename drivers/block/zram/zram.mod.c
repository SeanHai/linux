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
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0xea2b701b, "up_read" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x1b82c730, "blk_queue_io_opt" },
	{ 0x27864d57, "memparse" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0xfa4e858e, "generic_end_io_acct" },
	{ 0x1bb2db7, "zs_malloc" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x8f103d28, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x101557d8, "idr_for_each" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x91185511, "down_read" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x763354f5, "fsync_bdev" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x4b78f6eb, "blk_alloc_queue" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xee6dd99, "__cpuhp_state_add_instance" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x373db350, "kstrtoint" },
	{ 0x787b953, "idr_alloc" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x85142f62, "up_write" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xae45802d, "generic_start_io_acct" },
	{ 0x65baf559, "down_write" },
	{ 0x5484198, "bio_endio" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xb9e53f45, "__cpuhp_state_remove_instance" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe071d05d, "zs_pool_stats" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x28318305, "snprintf" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xdf30c245, "idr_find" },
	{ 0xc273714d, "bdget_disk" },
	{ 0xd63aa88f, "bdput" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x34d3207, "page_endio" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C0E5B7E27D314AC82096B88");
MODULE_INFO(rhelversion, "8.0");
