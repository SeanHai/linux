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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x92c2606d, "smscore_register_hotplug" },
	{ 0xc7e26082, "smscore_get_board_id" },
	{ 0x48534567, "sms_board_setup" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x622df804, "sms_board_event" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3ec8641e, "sms_board_lna_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x19805736, "smscore_putbuffer" },
	{ 0x11bec7c1, "smscore_unregister_hotplug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x8b69b18a, "sms_board_power" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdfc5b18b, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x36ec14eb, "smscore_register_client" },
	{ 0xe54f71f2, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv,dvb-core";


MODULE_INFO(srcversion, "AA87D15DF1A2CF6D0396DD7");
MODULE_INFO(rhelversion, "8.0");
