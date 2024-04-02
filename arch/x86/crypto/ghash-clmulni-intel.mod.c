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
	{ 0xe55cf4a0, "cryptd_ahash_queued" },
	{ 0xe6d52c07, "shash_ahash_digest" },
	{ 0x8d8aba53, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0x8a045d0c, "cryptd_shash_desc" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x5a66069d, "crypto_register_ahash" },
	{ 0x44145519, "crypto_unregister_shash" },
	{ 0xcbb13181, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1454b1c1, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x496643e3, "cryptd_ahash_child" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0x2ff4ca2b, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xd1ac8f27, "cryptd_alloc_ahash" },
	{ 0x5c6e853, "cryptd_free_ahash" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x93ba4ad9, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "A63457B79ACF8779AEE2ED3");
MODULE_INFO(rhelversion, "8.0");
