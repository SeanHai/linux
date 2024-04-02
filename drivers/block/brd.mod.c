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
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x27e1a049, "printk" },
	{ 0x7641fe8d, "blk_register_region" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x5484198, "bio_endio" },
	{ 0x34d3207, "page_endio" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2594c5e5, "get_disk_and_module" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x91715312, "sprintf" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x4b78f6eb, "blk_alloc_queue" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x2dc7de88, "__radix_tree_insert" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9754ec10, "radix_tree_preload" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x2612ff0c, "put_disk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xa79f6dfa, "radix_tree_delete" },
	{ 0xe787139f, "radix_tree_gang_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5FD7C943A137B8E0568997D");
MODULE_INFO(rhelversion, "8.0");
