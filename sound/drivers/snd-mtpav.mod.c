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
	{ 0x5eba9410, "__request_region" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7c8e022f, "release_and_free_resource" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa6106129, "param_ops_long" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "CC00053E5021CC1A099EB4C");
MODULE_INFO(rhelversion, "8.0");
