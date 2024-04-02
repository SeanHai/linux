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
	{ 0x69acdf38, "memcpy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x59e365ee, "skcipher_register_instance" },
	{ 0x89c2ef37, "crypto_inst_setname" },
	{ 0x530116e4, "crypto_grab_skcipher" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xfb578fc5, "memset" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A6876B65DE42D4351629D3E");
MODULE_INFO(rhelversion, "8.0");
