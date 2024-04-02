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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2b7d8b68, "dvb_frontend_suspend" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xa85d9b2, "dvb_frontend_resume" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd1810307, "dvb_dmx_swfilter_raw" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x4b760fd6, "dvb_dmx_swfilter_204" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x28318305, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core";


MODULE_INFO(srcversion, "CBED22E4F1D449A5B4F0A60");
MODULE_INFO(rhelversion, "8.0");
