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
	{ 0xbf2021a, "sbc_attrib_attrs" },
	{ 0x8175c58a, "sbc_get_device_type" },
	{ 0x1bc703ac, "target_backend_unregister" },
	{ 0xec3f74be, "transport_backend_register" },
	{ 0x7055ac91, "sbc_get_write_same_sectors" },
	{ 0x522902d, "sbc_dif_verify" },
	{ 0xa6e162c5, "iov_iter_zero" },
	{ 0x3dedeb29, "vfs_iter_read" },
	{ 0xe7354b4f, "vfs_iter_write" },
	{ 0xcc56d1bd, "iov_iter_bvec" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9529e705, "blkdev_issue_discard" },
	{ 0x864db162, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x9a15d6e2, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91715312, "sprintf" },
	{ 0xbf035071, "vfs_fsync_range" },
	{ 0xf7a3bb12, "target_complete_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3901d9f, "sbc_parse_cdb" },
	{ 0x352e6812, "filp_open" },
	{ 0x28318305, "snprintf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfa5dd651, "kernel_write" },
	{ 0x8a7667d, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "C8745A6B79D85309D0B8DE8");
MODULE_INFO(rhelversion, "8.0");
