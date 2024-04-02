#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xfe7843b, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd1810307, "dvb_dmx_swfilter_raw" },
	{ 0xfb578fc5, "memset" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x4b760fd6, "dvb_dmx_swfilter_204" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core";


MODULE_INFO(srcversion, "92B582862D5B3F45FD4D512");
MODULE_INFO(rhelversion, "8.0");
