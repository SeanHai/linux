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
	{ 0x15c08abb, "wusbhc_rh_start_port_reset" },
	{ 0x1526431c, "wusbhc_rh_control" },
	{ 0xabc7c00d, "wusbhc_rh_status_data" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x4c456488, "wa_dti_start" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x1bff6296, "wusbhc_b_create" },
	{ 0x1b0519d6, "device_wakeup_enable" },
	{ 0x9052f8b, "usb_add_hcd" },
	{ 0x8b9670f, "wa_create" },
	{ 0x251aecec, "wusbhc_create" },
	{ 0x28318305, "snprintf" },
	{ 0x6b9ef188, "wusb_et_name" },
	{ 0x9924c496, "__usb_get_extra_descriptor" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0x9c2fc551, "wa_process_errored_transfers_run" },
	{ 0x97226dae, "wa_urb_enqueue_run" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa337b76, "usb_create_hcd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3fc73cf6, "wusb_cluster_id_get" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xa867abf0, "wusb_cluster_id_put" },
	{ 0x2428061c, "usb_get_current_frame_number" },
	{ 0xfef6d28c, "wa_urb_enqueue" },
	{ 0xdb230a64, "wa_urb_dequeue" },
	{ 0xb9c34208, "rpipe_ep_disable" },
	{ 0xc07d15c, "usb_put_hcd" },
	{ 0x7b4e0a9a, "usb_remove_hcd" },
	{ 0x64b7217f, "wusbhc_b_destroy" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xe0024da3, "usb_put_intf" },
	{ 0xb43a245f, "uwb_rc_put" },
	{ 0x2b646994, "wusbhc_destroy" },
	{ 0x9abc3093, "__wa_destroy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");

MODULE_INFO(srcversion, "EB2C0FF2CB7F18B53656B68");
MODULE_INFO(rhelversion, "8.0");
