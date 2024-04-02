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
	{ 0xbca367c9, "ir_raw_handler_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xaceb5182, "ir_raw_handler_register" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0xb9afc0f3, "rc_repeat" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9e12e343, "ir_raw_gen_pd" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";


MODULE_INFO(srcversion, "8AC9F4EAE36AE714AD09681");
MODULE_INFO(rhelversion, "8.0");
