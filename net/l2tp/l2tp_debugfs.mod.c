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
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x27e1a049, "printk" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0xce3ef8ff, "l2tp_session_get_nth" },
	{ 0x6d859098, "l2tp_tunnel_free" },
	{ 0x92c74da4, "l2tp_tunnel_get_nth" },
	{ 0xb893b626, "seq_release" },
	{ 0xe7486c43, "__put_net" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xcdf36319, "seq_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e885a28, "get_net_ns_by_pid" },
	{ 0xf7d6636f, "current_task" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x41715c18, "seq_puts" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "416657D3BEEE5D2D2C7D62F");
MODULE_INFO(rhelversion, "8.0");
