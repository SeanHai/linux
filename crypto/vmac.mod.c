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
	{ 0x1940847b, "shash_free_instance" },
	{ 0xc2395e3e, "shash_register_instance" },
	{ 0x54e602e1, "crypto_init_spawn" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0xb43dede4, "crypto_alloc_instance2" },
	{ 0x98a8dbc, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0xfb578fc5, "memset" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0x6e034a99, "crypto_spawn_tfm" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "322EAC327855D3FDEA08F76");
MODULE_INFO(rhelversion, "8.0");
