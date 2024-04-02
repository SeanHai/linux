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
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x87b8798d, "sg_next" },
	{ 0x442e4bd3, "crypto_ahash_finup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9f403edb, "crypto_grab_aead" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xa26368ed, "aead_register_instance" },
	{ 0x28318305, "snprintf" },
	{ 0x530116e4, "crypto_grab_skcipher" },
	{ 0x8cc14bf6, "crypto_init_ahash_spawn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x74c5250f, "crypto_find_alg" },
	{ 0x93ba4ad9, "crypto_ahash_type" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc2395e3e, "shash_register_instance" },
	{ 0x1940847b, "shash_free_instance" },
	{ 0x54e602e1, "crypto_init_spawn" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0xb43dede4, "crypto_alloc_instance2" },
	{ 0x98a8dbc, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x6e034a99, "crypto_spawn_tfm" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B0214092F2F540A2AA55400");
MODULE_INFO(rhelversion, "8.0");
