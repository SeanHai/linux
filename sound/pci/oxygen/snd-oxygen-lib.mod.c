#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x81188c30, "match_string" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x1d17e2d1, "snd_mpu401_uart_new" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x98129232, "snd_pcm_lib_preallocate_pages" },
	{ 0x91715312, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcc7c9e41, "snd_component_add" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xd5235fb5, "snd_pcm_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x121da905, "queue_work_on" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-mpu401-uart,snd";


MODULE_INFO(srcversion, "2C5C88EDE041C45DCA3B7B4");
MODULE_INFO(rhelversion, "8.0");
