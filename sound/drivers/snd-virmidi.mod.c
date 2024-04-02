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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x27e1a049, "printk" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6083200b, "snd_virmidi_new" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-virmidi";


MODULE_INFO(srcversion, "FE7E0BA457D29F9D13BB23D");
MODULE_INFO(rhelversion, "8.0");
