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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x28318305, "snprintf" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x27e1a049, "printk" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x13b8cd9d, "usb_sg_wait" },
	{ 0xc2b5979d, "usb_sg_init" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x1727967d, "usb_sg_cancel" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x3604b5df, "usb_string" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xe6478472, "_dev_info" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0053901C869CF6A40EC764F");
MODULE_INFO(rhelversion, "8.0");
