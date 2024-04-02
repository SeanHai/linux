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
	{ 0x754d539c, "strlen" },
	{ 0x1d17e2d1, "snd_mpu401_uart_new" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x27e1a049, "printk" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xa6106129, "param_ops_long" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-mpu401-uart,snd";

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "D947C4958425384BEE37027");
MODULE_INFO(rhelversion, "8.0");
