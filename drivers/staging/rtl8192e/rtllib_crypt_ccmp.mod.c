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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xc095cb32, "lib80211_unregister_crypto_ops" },
	{ 0x5a691435, "lib80211_register_crypto_ops" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x5def83f9, "skb_push" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "C74AB2118B1AACA85D7BE71");
MODULE_INFO(rhelversion, "8.0");
