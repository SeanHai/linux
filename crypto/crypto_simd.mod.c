#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd1c36a6c, "cryptd_free_skcipher" },
	{ 0x48c26e52, "crypto_unregister_skciphers" },
	{ 0x1f966fc7, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x42b091a5, "crypto_register_skciphers" },
	{ 0x3b2463cc, "crypto_unregister_skcipher" },
	{ 0xdca286e3, "crypto_register_skcipher" },
	{ 0x8ee535dc, "cryptd_alloc_skcipher" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2c65add9, "cryptd_skcipher_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x28318305, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";


MODULE_INFO(srcversion, "575D6D857787AC27C1279EA");
MODULE_INFO(rhelversion, "8.0");
