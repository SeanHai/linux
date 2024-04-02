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
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";

MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOA1655*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOL1310*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOM7440*:");

MODULE_INFO(srcversion, "860FACE516DC29C5E24B791");
MODULE_INFO(rhelversion, "8.0");
