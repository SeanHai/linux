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
	{ 0x15a89a18, "parport_unregister_driver" },
	{ 0x27e1a049, "printk" },
	{ 0xe310d55, "parport_unregister_device" },
	{ 0x1896d2e3, "parport_claim" },
	{ 0xaff99d8e, "parport_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9be4fb1a, "parport_register_dev_model" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x56e402f9, "__parport_register_driver" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "A43B7A2BFC6AA42232A7B9C");
MODULE_INFO(rhelversion, "8.0");
