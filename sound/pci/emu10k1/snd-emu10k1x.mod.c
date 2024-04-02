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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7c8e022f, "release_and_free_resource" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm,snd-rawmidi,snd-ac97-codec";

MODULE_ALIAS("pci:v00001102d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1E0040FD7C8C8CBE94A0138");
MODULE_INFO(rhelversion, "8.0");
