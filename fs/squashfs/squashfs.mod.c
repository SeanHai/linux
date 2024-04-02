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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xdd49b8f2, "iget_failed" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6468caea, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xcd3a7a90, "make_bad_inode" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9129b06a, "pagecache_get_page" },
	{ 0x1f7dc867, "ll_rw_block" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcbd7280e, "mount_bdev" },
	{ 0x1d8ec8d8, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xce9a095c, "__getblk_gfp" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b28204, "__insert_inode_hash" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7d6636f, "current_task" },
	{ 0xdbc228a4, "__bread_gfp" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x65fdafa9, "d_obtain_alias" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc78c85c9, "set_nlink" },
	{ 0xea76c57b, "__wait_on_buffer" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x8569cf24, "generic_ro_fops" },
	{ 0x244db10a, "unlock_page" },
	{ 0xebade011, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x482079e0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2f0c1ee9, "unlock_new_inode" },
	{ 0x2f011045, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x61d9d11c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x732aa9c1, "page_get_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96ef158b, "d_splice_alias" },
	{ 0xb43d8c2d, "sync_filesystem" },
	{ 0xe60ffa7a, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0xb74da11c, "unregister_filesystem" },
	{ 0x7e092309, "init_special_inode" },
	{ 0xeb5fdba7, "new_inode" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x790a965d, "iget_locked" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C28C0A040BEC0BD6D2EFBE4");
MODULE_INFO(rhelversion, "8.0");
