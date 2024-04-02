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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdcd58a01, "crypto_unregister_rngs" },
	{ 0xa890596f, "crypto_register_rngs" },
	{ 0xfb578fc5, "memset" },
	{ 0x7c1372e8, "panic" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x27e1a049, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C19DB1016369CE77C999352");
MODULE_INFO(rhelversion, "8.0");
