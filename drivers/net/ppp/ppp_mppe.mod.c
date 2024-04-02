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
	{ 0x4a56b5c1, "ppp_unregister_compressor" },
	{ 0xe401a1b1, "ppp_register_compressor" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "1354553F28FE3C49400B0D3");
MODULE_INFO(rhelversion, "8.0");
