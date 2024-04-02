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
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0xa26368ed, "aead_register_instance" },
	{ 0x28318305, "snprintf" },
	{ 0x530116e4, "crypto_grab_skcipher" },
	{ 0x8cc14bf6, "crypto_init_ahash_spawn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x7f11c298, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0xe11f5ad6, "crypto_get_default_null_skcipher" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=authenc";


MODULE_INFO(srcversion, "0716481C8A562BDBABF09EB");
MODULE_INFO(rhelversion, "8.0");
