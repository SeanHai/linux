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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0x75943e25, "i8253_lock" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "A5AC21BBA486283E3EA1BD4");
MODULE_INFO(rhelversion, "8.0");
