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
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "1BFCD51808270A8737D4D79");
MODULE_INFO(rhelversion, "8.0");
