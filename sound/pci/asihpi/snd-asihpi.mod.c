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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x47100a37, "snd_pcm_hw_constraint_pow2" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("pci:v0000104Cd0000A106sv0000175Csd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC60sv0000175Csd*bc*sc*i*");

MODULE_INFO(srcversion, "EE421AEBFBE1557A16EDBF6");
MODULE_INFO(rhelversion, "8.0");
