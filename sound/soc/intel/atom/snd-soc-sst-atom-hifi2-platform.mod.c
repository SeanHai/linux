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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xea2b701b, "up_read" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x7b2d20e3, "snd_soc_dapm_new_controls" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x91185511, "down_read" },
	{ 0x2519c417, "snd_soc_dapm_add_routes" },
	{ 0x8c4c3742, "snd_soc_poweroff" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfc347dae, "dapm_kcontrol_get_value" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4ed5ce06, "snd_soc_add_component_controls" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x1a92fce0, "snd_soc_rtdcom_lookup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf403d1dd, "snd_soc_dapm_new_widgets" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x488ccf44, "snd_soc_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x66113d39, "snd_soc_new_compress" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa31f3e7e, "snd_soc_resume" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "BD1A98730A4B0EC48F2AB01");
MODULE_INFO(rhelversion, "8.0");
