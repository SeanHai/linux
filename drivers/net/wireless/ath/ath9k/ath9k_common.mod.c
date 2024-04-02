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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x8f362e2c, "ath9k_hw_gettsf64" },
	{ 0x2105444b, "default_llseek" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x9a910d01, "simple_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x10aedc69, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd5fa3068, "ath_hw_keyreset" },
	{ 0xdefc95d7, "ath9k_hw_set_txpowerlimit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,ath9k_hw,ath";


MODULE_INFO(srcversion, "30B3A2A061A1A6FD62669EA");
MODULE_INFO(rhelversion, "8.0");
