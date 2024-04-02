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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xefc8c7b8, "snd_jack_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0xd5235fb5, "snd_pcm_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0xedc03953, "iounmap" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0x121da905, "queue_work_on" },
	{ 0xb42c1d69, "snd_jack_report" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x28318305, "snprintf" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xab65ed80, "set_memory_uc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "C4961073951E48A898E1F1D");
MODULE_INFO(rhelversion, "8.0");
