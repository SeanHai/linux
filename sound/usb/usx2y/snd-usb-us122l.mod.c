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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbe360975, "snd_power_wait" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x674ae068, "__snd_usbmidi_create" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x2428061c, "usb_get_current_frame_number" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe0024da3, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib,snd,snd-hwdep";

MODULE_ALIAS("usb:v0644p800Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p800Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8020d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2981C2C608C08066F464FD7");
MODULE_INFO(rhelversion, "8.0");
