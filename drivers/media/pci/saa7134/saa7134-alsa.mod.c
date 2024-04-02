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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x1211df5d, "saa7134_devlist" },
	{ 0xfbd5faa7, "saa7134_dmasound_exit" },
	{ 0x9da36d20, "saa7134_dmasound_init" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0x6672ffe, "saa7134_set_dmabits" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x98060770, "saa7134_pgtable_build" },
	{ 0xebf99c6a, "saa7134_pgtable_alloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xa5696865, "saa7134_pgtable_free" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x27e1a049, "printk" },
	{ 0x91715312, "sprintf" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xf34ebd87, "saa7134_tvaudio_setmute" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0xf1b4ecbc, "saa_dsp_writel" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,saa7134,snd";


MODULE_INFO(srcversion, "4E091F268197DC3B771F617");
MODULE_INFO(rhelversion, "8.0");
