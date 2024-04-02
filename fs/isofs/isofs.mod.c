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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xdd49b8f2, "iget_failed" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6468caea, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xecbd6652, "unload_nls" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x64999638, "iget5_locked" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0x41715c18, "seq_puts" },
	{ 0x9129b06a, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1f7dc867, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcbd7280e, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x54c8b65f, "page_symlink_inode_operations" },
	{ 0x1d8ec8d8, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xce9a095c, "__getblk_gfp" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xb4b4c924, "from_kgid_munged" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0x351dc58d, "mpage_readpages" },
	{ 0x1a1cba3f, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf7d6636f, "current_task" },
	{ 0xdbc228a4, "__bread_gfp" },
	{ 0x27e1a049, "printk" },
	{ 0x65fdafa9, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0xc78c85c9, "set_nlink" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xea76c57b, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8569cf24, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x244db10a, "unlock_page" },
	{ 0xebade011, "inode_nohighmem" },
	{ 0xcb5efe82, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x482079e0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xa46e173d, "load_nls" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2f0c1ee9, "unlock_new_inode" },
	{ 0x2f011045, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x61d9d11c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4304437, "load_nls_default" },
	{ 0x96ef158b, "d_splice_alias" },
	{ 0xb43d8c2d, "sync_filesystem" },
	{ 0x6ee08c, "sb_set_blocksize" },
	{ 0xe60ffa7a, "d_make_root" },
	{ 0x61869b, "ioctl_by_bdev" },
	{ 0xb74da11c, "unregister_filesystem" },
	{ 0x7e092309, "init_special_inode" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1fcefe0, "generic_block_bmap" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A94CB99CDBFF714EB63B7ED");
MODULE_INFO(rhelversion, "8.0");
