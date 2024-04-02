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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7e9cf400, "is_fw_load" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc0cada8, "snd_pcm_stream_lock" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0x38a01e05, "cx231xx_register_extension" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8478ce21, "snd_pcm_stream_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0b5a1fe, "cx231xx_capture_start" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d425b92, "cx231xx_set_alt_setting" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x121da905, "queue_work_on" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x6b751e35, "cx231xx_unregister_extension" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,snd-pcm,snd";


MODULE_INFO(srcversion, "291607E82A204ED45E5634D");
MODULE_INFO(rhelversion, "8.0");
