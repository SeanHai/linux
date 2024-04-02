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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x4dc10399, "snd_i2c_device_create" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x1d17e2d1, "snd_mpu401_uart_new" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0x2809d1f2, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcd406d25, "snd_i2c_sendbytes" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x33068634, "snd_cs8427_reg_write" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2d261d90, "snd_akm4xxx_reset" },
	{ 0x8ed3b232, "snd_cs8427_iec958_build" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x8b041bc1, "snd_cs8427_create" },
	{ 0x3ed22ca7, "snd_ice1712_akm4xxx_free" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xa302978b, "snd_i2c_bus_create" },
	{ 0x1c6886f, "snd_cs8427_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x71229bf8, "snd_i2c_readbytes" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x258a2180, "snd_cs8427_iec958_pcm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0xc7d5eb66, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd6d2725a, "snd_cs8427_iec958_active" },
	{ 0xe4ef15dc, "snd_akm4xxx_write" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x28318305, "snprintf" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x2f3877e3, "snd_ice1712_akm4xxx_init" },
	{ 0x8d9bc6b3, "snd_akm4xxx_init" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-i2c,snd-mpu401-uart,snd,snd-ice17xx-ak4xxx,snd-cs8427,snd-ak4xxx-adda,snd-ac97-codec";

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F065AB177A5251D012D336");
MODULE_INFO(rhelversion, "8.0");
